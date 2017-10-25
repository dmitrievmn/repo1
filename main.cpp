#include "Point3d.h"
#include <iostream>

int main()
{
    Point3d p1;
    Point3d p2(1.,1.,1.);
    
    //std::cout << "p1 = (" << p1.get_x() << ", " << p1.get_y() << ", " << p1.get_z() << ")" << std::endl;
    //std::cout << "p2 = (" << p2.get_x() << ", " << p2.get_y() << ", " << p2.get_z() << ")" << std::endl;
    std::cout << "p1 = " << p1 << std::endl;
    std::cout << "p2 = " << p2 << std::endl;
    std::cout<< "Distance from p1 to p2: " << p1.distanceTo(p2) << std::endl;
    std::cout << "Distance between p1 and p2: " << distanceBetween(p1,p2) << std::endl;

    Point3d p3 = p1 + p2;
    std::cout << "p3 = " << p3 << std::endl;
    
    Point3d p4(100., 200., 300.);
    p4();
    std::cout << "p4 = " << p4 << std::endl;

    Point3d p5(100.,200.,300.);
   
    bool t=(p4==p5);
    std::cout << "p4==p5 is " << t << std::endl;

    p4 = p5;
    std::cout << "p4 = " << p4 << std::endl;
    std::cout << "p5 = " << p5 << std::endl;
    t=(p4==p5);
    std::cout << "p4==p5 is " << t << std::endl;




    return 0;
}


