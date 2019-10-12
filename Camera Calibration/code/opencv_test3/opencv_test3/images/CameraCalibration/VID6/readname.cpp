#include <stdio.h> 

  int main() 
  { 
	char filename[] = "D:\\School\\Class\\三春夏\\智能视觉信息采集\\lec2\\lab2\\Reprojection Error\\opencv_test3\\opencv_test3\\images\\CameraCalibration\\VID6\\train.txt"; //文件名
	FILE *fp; 
	char StrLine[1024];             //每行最大读取的字符数
	if((fp = fopen(filename,"r")) == NULL) //判断文件是否存在及可读
	{ 
	  printf("error!"); 
	  return -1; 
	} 
	FILE *fw = NULL;
	fw = fopen("picname.txt", "w");
		if(fw ==NULL)
		printf("打开文件picname.txt失败\n");	
  	
	while (!feof(fp)) 
	{ 
	  fgets(StrLine,1024,fp);  //读取一行
	  printf("%s", StrLine); //输出
	  fprintf(fw,"images/CameraCalibration/VID6/%s" ,StrLine);
	} 
	fclose(fp); 
	fclose(fw);                    //关闭文件
	return 0; 
  }
