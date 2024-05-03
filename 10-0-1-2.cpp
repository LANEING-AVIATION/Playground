#include <iostream>
#include <cmath>
#define  PI  3.1415926
using  namespace  std;

class Point
{
private:
    double x; // x坐标
    double y; // y坐标
public:
    Point(double x = 0, double y = 0) // 带默认值的构造函数
    {
        this->x = x;
        this->y = y;
    }
    double getX() // 获取x坐标
    {
        return x;
    }
    double getY() // 获取y坐标
    {
        return y;
    }
    void setX(double x) // 设置x坐标
    {
        this->x = x;
    }
    void setY(double y) // 设置y坐标
    {
        this->y = y;
    }
};

class Triangle
{
protected:
    Point  A;
    Point  B;
    Point  C;
public:
    Triangle(Point  A,Point  B,Point  C)
    {
        this->A  =  A;
        this->B  =  B;
        this->C  =  C;
    }
    double  getAB()
    {
        return  sqrt(pow((A.getX()-B.getX()),2)+pow((A.getY()-B.getY()),2));
    }
    double  getAC()
    {
        return  sqrt(pow((A.getX()-C.getX()),2)+pow((A.getY()-C.getY()),2));
    }
    double  getBC()
    {
        return  sqrt(pow((B.getX()-C.getX()),2)+pow((B.getY()-C.getY()),2));
    }
    double  getA()
    {
        double  fz  =  pow(getAB(),2)+pow(getAC(),2)-pow(getBC(),2);
        double  fm  =  2*getAB()*getAC();
        return  acos(fz/fm);
    }
    double  getB()
    {
        double  fz  =  pow(getAB(),2)+pow(getBC(),2)-pow(getAC(),2);
        double  fm  =  2*getAB()*getBC();
        return  acos(fz/fm);
    }
    double  getC()
    {
        double  fz  =  pow(getAC(),2)+pow(getBC(),2)-pow(getAB(),2);
        double  fm  =  2*getAC()*getBC();
        return  acos(fz/fm);
    }
    double getArea()
    {            
		double p = (getAB()+getAC()+getBC())/2;
		return sqrt(p*(p-getAB())*(p-getAC())*(p-getBC()));
	}
    void draw()
    {
        cout<<"Triangle:"<<endl;
        cout<<"PointA:"<<"x="<<A.getX()<<",y="<<A.getY()<<endl;
        cout<<"PointB:"<<"x="<<B.getX()<<",y="<<B.getY()<<endl;
        cout<<"PointC:"<<"x="<<C.getX()<<",y="<<C.getY()<<endl;
    }
};


class  EquilateralTriangle:public  Triangle
{
public:
    EquilateralTriangle(Point A, Point B, Point C) : Triangle(A, B, C) // 带参数的构造函数，调用基类的构造函数
    {
    }
    double getA() // 重写获取角A的弧度值的函数
    {
        return PI / 3;
    }
    double getB() // 重写获取角B的弧度值的函数
    {
        return PI / 3;
    }
    double getC() // 重写获取角C的弧度值的函数
    {
        return PI / 3;
    }
    double getEdge() // 获取边长的公共接口
    {
        return getAB(); // 任意一条边都可以
    }
    void draw() // 添加这个函数
    {
        cout << "EquilateralTriangle:" << endl;
        cout << "        Area:" << getArea() << endl;
        cout << "        PointA:x=" << A.getX() << ",y=" << A.getY() << endl;
        cout << "        PointB:x=" << B.getX() << ",y=" << B.getY() << endl;
        cout << "        PointC:x=" << C.getX() << ",y=" << C.getY() << endl;
        cout << "        Angle:" << getA() << endl;
        cout << "        Edge:" << getEdge() << endl;
    }
};

int  main()
{
    double  x1,y1,x2,y2,x3,y3;
    double  x4,x5,x6,y4,y5,y6;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cin>>x4>>y4>>x5>>y5>>x6>>y6;
    Point  A(x1,y1);
    Point  B(x2,y2);
    Point  C(x3,y3);
    Point  D(x4,y4);
    Point  E(x5,y5);
    Point  F(x6,y6);
    Triangle  t(A,B,C);
    EquilateralTriangle et(D,E,F);
    t.draw();
    et.draw();
    return 0;
}

