#include <stdio.h> 

  int main() 
  { 
	char filename[] = "D:\\School\\Class\\������\\�����Ӿ���Ϣ�ɼ�\\lec2\\lab2\\Reprojection Error\\opencv_test3\\opencv_test3\\images\\CameraCalibration\\VID6\\train.txt"; //�ļ���
	FILE *fp; 
	char StrLine[1024];             //ÿ������ȡ���ַ���
	if((fp = fopen(filename,"r")) == NULL) //�ж��ļ��Ƿ���ڼ��ɶ�
	{ 
	  printf("error!"); 
	  return -1; 
	} 
	FILE *fw = NULL;
	fw = fopen("picname.txt", "w");
		if(fw ==NULL)
		printf("���ļ�picname.txtʧ��\n");	
  	
	while (!feof(fp)) 
	{ 
	  fgets(StrLine,1024,fp);  //��ȡһ��
	  printf("%s", StrLine); //���
	  fprintf(fw,"images/CameraCalibration/VID6/%s" ,StrLine);
	} 
	fclose(fp); 
	fclose(fw);                    //�ر��ļ�
	return 0; 
  }
