#include "header.h"
#include "faceDetect.h"
#include "facePoint.h"
#include "faceAlign.h"
#include "getFiles.h"
#include "save_coordinate.h"
using namespace std;


int main(int argc,char* argv[])
{
	string path="E:/����/���ʹ��/yaleface";

	vector<string>filename;

    char* filepath=new char[50];

	int* rect=new int[4];

	int *pos=new int[10];//pos�洢���ǹؼ����λ������

	getFiles(path,filename);

	for(vector<string>::size_type ix=0;ix<filename.size();ix++)
	{
		IplImage* img_in=cvLoadImage(filename[ix].c_str(),CV_LOAD_IMAGE_ANYCOLOR);

		//facedetect
		FaceDetector FD(img_in);

		FD.runFaceDetector();

		int num=FD.getFaceCount();

		if(num==0)
		{
			cout<<"no face detected!"<<endl;
		}
		else
		{
			

			FD.getFacePosition(rect);

			//facepoint

			FacePoints FP(FD.getGrayimage());

			FP.runFacePoints(num,rect);

			//int *pos=new int[10];//pos�洢���ǹؼ����λ������

			pos=FP.getFacePoints();

			//facealign
			FaceAlign FA(FD.getGrayimage(),rect,pos);

			FA.runFaceAlign();

			int* F_pos=new int;

			F_pos=FA.getFaceAlignPos();//��ȡ��һ���������������

			IplImage* AlignFace=FA.getAlignimg();//��ȡ��һ�����ͼƬ

			/*CvPoint p1,p2;
			p1.x=F_pos[0];
			p1.y=F_pos[1];
			p2.x=F_pos[2];
			p2.y=F_pos[3];*/

			

			//�����һ���õ�ͼƬ
		

			

			_splitpath(filename[ix].c_str(),NULL,NULL,filepath,NULL);
			
			string save_path="../Alignface/"+(string)filepath+".jpg";

			cvSaveImage(save_path.c_str(),AlignFace);

			//��������
			saveCoordinate((string)filepath,F_pos);

			
			
			delete[] F_pos;
			
			
	  }
	
	
	}	
	

		return 0;
	}
	