#include<iostream>  
#include <opencv/core/core.hpp>  
#include <opencv/highgui/highgui.hpp>  


using namespace cv;  


int main()  
{  
    // ����һ��ͼƬ����Ϸԭ����  
    Mat img=imread("pic.jpg");  
    // ����һ����Ϊ "��Ϸԭ��"����  
    cvNamedWindow("��Ϸԭ��");  
    // �ڴ�������ʾ��Ϸԭ��  
    imshow("��Ϸԭ��",img);  
    // �ȴ�6000 ms�󴰿��Զ��ر�  
    waitKey(6000);  
} 