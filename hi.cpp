#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void pl();
void ji();
void ch();
void yu();
void sq();
void si();
void co();
void ta();
void gerenshui();
void jingyingshui();
void gaosi();
void pingjunshu();
void jiecheng();
main() {
	int option;
	do {
		cout<<"======================================\n";
		  cout<<"欢迎使用张氏超级计算器——全新升级\n";
		cout<<"======================================\n";
		cout<<"1.加法运算\n";
		cout<<"2.减法运算\n";
		cout<<"3.乘法运算\n";
		cout<<"4.除法运算\n";
		cout<<"5.平方根运算\n";
		cout<<"6.三角函数——sin运算\n";
		cout<<"7.三角函数——cos运算\n";
		cout<<"8.三角函数——tan运算\n";
		cout<<"9.π值参考\n";
		cout << "10.个人所得税计算器\n";
		cout << "11.典型高斯求和\n";
		cout << "12.平均数\n";
		cout << "13.阶乘\n";
		cout << "14.退出\n";
		do {
			cout<<"输入您的选择：";
			cin>>option;
		} while (option < 1 || option>14);
		switch(option) {
		case 1:
			pl();
			break;
		case 2:
			ji();
			break;
		case 3:
			ch();
			break;
		case 4:
			yu();
			break;
		case 5:
			sq();
			break;
		case 6:
			si();
			break;
		case 7:
			co();
			break;
		case 8:
			ta();
			break;
		case 9:
			cout<<"3.1415926535897\n";
			break;
		case 10:
			gerenshui();
			break;
		case 11:
			gaosi();
			break;
		case 12:
			pingjunshu();
			break;
		case 13:
			jiecheng();
			break;
		case 14:
printf("张义铭版权所有，仿冒必究！");
			system("pause");
			
			break;
		}
	} while (option != 14);
	return 0;
}



void pl() {
	long double a,b;
	cout<<"请输入第一个数字：";
	cin>>a;
	cout<<"请输入第二个数字：";
	cin>>b;
	cout<<a+b<<"\n";
	return;
}

void ji() {
	long double a,b;
	cout<<"请输入被减数：";
	cin>>a;
	cout<<"请输入减数：";
	cin>>b;
	cout<<a-b<<"\n";
	return;
}

void ch() {
	long double a,b;
	cout<<"请输入第一个数字：";
	cin>>a;
	cout<<"请输入第二个数字：";
	cin>>b;
	cout<<a*b<<"\n";
	return;
}

void yu() {
	long double a,b;
	cout<<"请输入被除数：";
	cin>>a;
	cout<<"请输入除数：";
	cin>>b;
	cout<<a/b<<"\n";
	return;
}

void sq() {
	long double a,g;
	cout<<"请输入某数的平方：";
	cin>>a;
	sqrt(a);
	g=sqrt(a);
	cout<<g<<"\n";
	return;
}

void si() {
	long double a,g;
	cout<<"请输入想要运算的数：";
	cin>>a;
	sin(a);
	g=sin(a);
	cout<<g<<"\n";
	return;
}

void co() {
	long double a,g;
	cout<<"请输入想要运算的数：";
	cin>>a;
	cos(a);
	g=cos(a);
	cout<<g<<"\n";
	return;
}

void ta() {
	long double a,g;
	cout<<"请输入想要运算的数：";
	cin>>a;
	tan(a);
	g=tan(a);
	cout<<g<<"\n";
	return;
}
void gerenshui() {
	float ysr, ynse, sds;
	printf("请输入您的月收入："); scanf("%f", &ysr);
	if (ysr <= 3500)sds = 0;
	else
	{
		ynse = ysr - 3500;
		if (ynse <= 1500)sds = ynse * .05;
		if (ynse > 1500 && ynse <= 4500)
			sds = (ynse - 500)*.1 + 25;
		if (ynse > 4500 && ynse <= 9000)
			sds = (ynse - 2000)*.15 + 150;
		if (ynse > 9000 && ynse <= 35000)
			sds = (ynse - 9000)*.2 + 175 + 450;
		if (ynse > 35000 && ynse <= 55000)
			sds = (ynse - 35000)*.25 + 625 + 3000;
		if (ynse > 55000 && ynse <= 80000)
			sds = (ynse - 55000)*.3 + 3625 + 5000;
	}
	printf("月收入=%10.2f  所得税=%10.2f\n", ysr, sds);
	return;
}		
void gaosi() {
	int i, s, n;
	printf("请输入末项：\n");
	scanf("%d", &n);
	i = 1; s = 0;
	while (i <= n) { s += i; i++; }
	printf("%d\n", s);
	return;
}
void pingjunshu() {
	int i, n, s, x;
	printf("请输入有几个数：\n"); scanf("%d", &n);
	i = 1; s = 0;
	printf("请依次输入%d个整数，用空格相隔：\n", n);
	while (i <= n) {
		scanf("%d", &x); s += x; i++;
	}
	printf("平均数=%f\n", (float)(s) / n);
	return;
}
void jiecheng() {
	int i, n; double s;
	printf("求阶乘，请输入这个数：\n"); scanf("%d", &n);
	i = 1; s = 1.0;
	while (i <= n) {
		s *= i; i++;
	}
	printf("%d!=%lf  %.18g\n", n, s, s);
	return;
}