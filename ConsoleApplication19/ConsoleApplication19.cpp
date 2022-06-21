#include <iostream>
#include <cmath>
using namespace std;


//(1)----------------------------------
//int main()
//{
//	int height;
//	cout << "Enter height: ";
//	cin >> height;
//
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < height; x++)
//		{
//			if (x == 0 && y < height || x == y && x < height / 2 || x + y + 1 == height && x <= height / 2 )
//				cout << "*";
//			else
//				cout << " ";
//		}
//		cout << "\n";
//	}
//}
//-------------------------------------


//(2)----------------------------------
//int main()
//{
//	  int num;
//    int num_new = 0;
//	  cin >> num;
//
//    int num1 = num;
//
//    while (num1 > 0)
//    {
//        num_new = 10 * num_new + num1 % 10;
//        num1 /= 10;
//    }
//
//    if (num == num_new)
//        cout << "Number is palindrome";
//    else if (num != num_new)
//        cout << "Number is not palindrome";   
//}
//-------------------------------------


//(3)----------------------------------
//int main()
//{
//    int length, height, deep;
//
//    cout << "Enter length, height and deep: ";
//    cin >> length >> height >> deep;
//
//    for (int y = 0; y < height; y++)
//    {
//        for (int x = 0; x < length; x++)
//        {
//            //передняя сторона
//            if (y == deep && x < length - deep || x == 0 && y > deep || y == height - 1 && x < length - deep || x == length - deep - 1 && y > deep)
//            {
//                cout << "*";
//            }
//            //задняя сторона
//            else if (y == 0 && x > deep || x == length - 1 && y < height - deep)
//            {
//                cout << "*";
//            }
//            //диагонали
//            else if (x + y == deep || x + y == length - 1 && y < deep || x + y == length + height - deep - 1)
//            {
//                cout << "*";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//}
//-------------------------------------


//(4)----------------------------------
//int main()
//{
//    for (int i = 2; i <= 10000000; i++)
//    {
//        for (int j = 2; j <= i; j++)
//        {
//            if (i % j == 0)
//                break;
//
//            else if (i == j + 1)
//                cout << i << "\n";
//        }
//    }     
//}
//-------------------------------------


//(5)----------------------------------
//int main()
//{
//    int num, summ = 0, count = 0;
//
//    for (int i = 0; i < 10000000; i++)
//    {
//        num = i;
//
//        while (num != 0)
//        {
//            num /= 10;
//            count++;
//        }
//
//        num = i;
//
//        while (num > 0)
//        {
//            summ += pow(num % 10, count);
//            num /= 10;
//        }
//
//        if (summ == i)
//        {
//            cout << i << "\n";
//        }
//        summ = 0;
//        count = 0;
//    }  
//}
//-------------------------------------