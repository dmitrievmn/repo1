#include <iostream>

class Point3d
{
    private:
    double m_x;
    double m_y;
    double m_z;

    public:
    Point3d();
    Point3d(double x, double y, double z);

    double get_x() const;
    double get_y() const;
    double get_z() const;

    void set_x(double x);
    void set_y(double y);
    void set_z(double z);
    
    double distanceTo(const Point3d &p) const;

    friend std::ostream & operator<<(std::ostream &out, Point3d &p);

    friend Point3d operator+(const Point3d &p1, const Point3d &p2);

    friend double distanceBetween(const Point3d &p1, const Point3d &p2);

    void operator()();
    bool operator==(const Point3d &p);
    Point3d & operator=(const Point3d &p);
};

