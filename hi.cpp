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
		  cout<<"��ӭʹ�����ϳ�������������ȫ������\n";
		cout<<"======================================\n";
		cout<<"1.�ӷ�����\n";
		cout<<"2.��������\n";
		cout<<"3.�˷�����\n";
		cout<<"4.��������\n";
		cout<<"5.ƽ��������\n";
		cout<<"6.���Ǻ�������sin����\n";
		cout<<"7.���Ǻ�������cos����\n";
		cout<<"8.���Ǻ�������tan����\n";
		cout<<"9.��ֵ�ο�\n";
		cout << "10.��������˰������\n";
		cout << "11.���͸�˹���\n";
		cout << "12.ƽ����\n";
		cout << "13.�׳�\n";
		cout << "14.�˳�\n";
		do {
			cout<<"��������ѡ��";
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
printf("��������Ȩ���У���ð�ؾ���");
			system("pause");
			
			break;
		}
	} while (option != 14);
	return 0;
}



void pl() {
	long double a,b;
	cout<<"�������һ�����֣�";
	cin>>a;
	cout<<"������ڶ������֣�";
	cin>>b;
	cout<<a+b<<"\n";
	return;
}

void ji() {
	long double a,b;
	cout<<"�����뱻������";
	cin>>a;
	cout<<"�����������";
	cin>>b;
	cout<<a-b<<"\n";
	return;
}

void ch() {
	long double a,b;
	cout<<"�������һ�����֣�";
	cin>>a;
	cout<<"������ڶ������֣�";
	cin>>b;
	cout<<a*b<<"\n";
	return;
}

void yu() {
	long double a,b;
	cout<<"�����뱻������";
	cin>>a;
	cout<<"�����������";
	cin>>b;
	cout<<a/b<<"\n";
	return;
}

void sq() {
	long double a,g;
	cout<<"������ĳ����ƽ����";
	cin>>a;
	sqrt(a);
	g=sqrt(a);
	cout<<g<<"\n";
	return;
}

void si() {
	long double a,g;
	cout<<"��������Ҫ���������";
	cin>>a;
	sin(a);
	g=sin(a);
	cout<<g<<"\n";
	return;
}

void co() {
	long double a,g;
	cout<<"��������Ҫ���������";
	cin>>a;
	cos(a);
	g=cos(a);
	cout<<g<<"\n";
	return;
}

void ta() {
	long double a,g;
	cout<<"��������Ҫ���������";
	cin>>a;
	tan(a);
	g=tan(a);
	cout<<g<<"\n";
	return;
}
void gerenshui() {
	float ysr, ynse, sds;
	printf("���������������룺"); scanf("%f", &ysr);
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
	printf("������=%10.2f  ����˰=%10.2f\n", ysr, sds);
	return;
}		
void gaosi() {
	int i, s, n;
	printf("������ĩ�\n");
	scanf("%d", &n);
	i = 1; s = 0;
	while (i <= n) { s += i; i++; }
	printf("%d\n", s);
	return;
}
void pingjunshu() {
	int i, n, s, x;
	printf("�������м�������\n"); scanf("%d", &n);
	i = 1; s = 0;
	printf("����������%d���������ÿո������\n", n);
	while (i <= n) {
		scanf("%d", &x); s += x; i++;
	}
	printf("ƽ����=%f\n", (float)(s) / n);
	return;
}
void jiecheng() {
	int i, n; double s;
	printf("��׳ˣ��������������\n"); scanf("%d", &n);
	i = 1; s = 1.0;
	while (i <= n) {
		s *= i; i++;
	}
	printf("%d!=%lf  %.18g\n", n, s, s);
	return;
}