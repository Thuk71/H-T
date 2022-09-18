#include<iostream>
//#include<cmath>
//using namespace std;
//// dinh nghia ham
//bool ktraSCP (int n);
//void hienthi ();
//int demSCP();
//
//main(){
//	
//	hienthi ();
//	cout << "\n";
//	demSCP();
//}
//// trien khai ham
//bool ktraSCP(int n){
//	int a = sqrt(n);
//	if (a*a==n) return true; // thieu return
//	else return false;
//}
//void hienthi(){
//	for (int i=1; i<10000; i++){
//		if (ktraSCP(i) == true) cout << i << "\t";
//	}
//}
//int demSCP(){
//	int d = 0;
//	for (int i=1; i<1000; i++){
//		if (ktraSCP(i) == true) d++;
//	}
//	cout << d;
//	return d;
//}

//Bai 2.3
//#include<iostream>
//using namespace std;
//// dinh nghia ham
//void nhapsoNgDg (int &n);
//void chuso (int n);
//bool ktraSNT (int n);
//main(){
//	int n;
//	nhapsoNgDg(n);
//	chuso(n);
//	if (ktraSNT(n) == true) cout << "N la SNT";
//	else cout << "N ko là SNT";
//}
////trien khai ham
//void nhapsoNgDg (int &n){
//	cin >> n;
//}
//void chuso(int n){
//	int min = 9, max = 0;
//	int temp = n, dem=0;
//	while (temp!=0){
//		dem++;
//		int d = temp % 10;
//	    temp = temp/10;
//	    if (min>d) min = d;
//	    if (max<d) max = d;
//	}cout << "So chu so cua N: "<<dem << "\nChu so lon nhat cua N: " << max << "\nCHu so nho nhat cua N: " << min;
////	return dem;
//}
//bool ktraSNT(int n){ // thieu int n
//	int d=0;
//	for (int i=2; i<n; i++){
//		if (n%i==0) return false;
//		else return true;}
////		if (n%i==0) d++; //LM DAI WA
////	}
////	if (d==0) cout << "N la SNT";
////	else cout << "N ko là SNT";
//}

// Xem lai bai lm Thi xin dc
//#include <iostream>
//#include<math.h>
//using namespace std;
//void nhap (int &n){
//	cout<<"Nhap gia tri cua N: ";
// 	cin>>n;
// }
//int count(int n){
// 	if(n < 10)
// 	   return 1;
//	else return 1 + count(n / 10);
// }
// int Max(int n){
//  	int max = 0;
//	int tmp;
// 	while(n){
// 		tmp = n % 10;
//		if(tmp > max) max = tmp;
// 		n/=10;	}
// 	return max;
//}
// int Min(int n){
// 	int min = 9;
//	int tmp;
// 	while(n){
//	tmp = n % 10;		if(tmp < min) min = tmp;
// 		n/=10;
// 	}
// 	return min;
// }
//int nt(int n){
//	for(int i = 2; i <= sqrt(n); i++){
// 		if(n % i == 0)
// 		 return 0;
// 	}
// 	return n > 1;
//}
//int main(){
// 	int n;
//	nhap(n);
// 	cout<<"So luong chu so cua N la: "<<count(n)<<endl;
//	cout<<"Chu so lon nhat cua N la: "<<Max(n)<<endl;
//	cout<<"Chu so nho nhat cua N la: "<<Min(n)<<endl;
//	if(nt(n))
//		cout<<"N la so nguyen to";
// 	else cout<<"N khong phai la so nguyen to";
// 	return 0;
//}

//BTVN: Bai 2-1
#include<iostream>
#include<cmath>
using namespace std;
void nhapDL (int &n, float &x);
void tinhs (int n, float x);

main(){
	int n; float x;
	nhapDL(n,x);
	tinhs(n,x);
}

void nhapDL (int &n, float &x){
	cin >> x >> n;
}
void tinhs (int n, float x){
	float s1=0, s2=1, s3=x, s4=0;
	int d=1;
	for (int i=1; i<=n; i++){
		s1 += (float)pow(x,i)/(i*(i+1));
		d *= i;
		s2 += (float)1/d;
		s3 += pow(x,2*i+1);
	}
	s4 = s1+2*s2+3*s3;
	cout << "s1= " << s1 << "\ns2= " << s2 << "\ns3= " << s3 << "\ns4= " << s4;
}

//Bai 2-2
//#include<iostream>
//using namespace std;
//void chuso()
//main(){
//	int a = 2e+9;
//	cout << a;
//	int m;
//	do {
//		cout << "Nhap so nguyen duong m= ";
//		cin >> m;
//	} while (m>2e+9);
//}
