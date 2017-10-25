#include "Point3d.h"
#include <cmath>

Point3d::Point3d()
{
    m_x = 0.;
    m_y = 0.;
    m_z = 0.;
}

Point3d::Point3d(double x, double y, double z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

double Point3d::get_x() const
{
    return m_x;
}

double Point3d::get_y() const
{
    return m_y;
}

double Point3d::get_z() const
{
    return m_z;
}

void Point3d::set_x(double x)
{
    m_x = x;
}

void Point3d::set_y(double y)
{
    m_y = y;
}

void Point3d::set_z(double z)
{
    m_z = z;
}

double Point3d::distanceTo(const Point3d &p) const
{
    double dx = m_x - p.m_x;
    double dy = m_y - p.m_y;
    double dz = m_z - p.m_z;

    return std::sqrt( dx*dx + dy*dy + dz*dz );
}

// Operator ()
void Point3d::operator()()
{
    m_x = 0.;
    m_y = 0.;
    m_z = 0.;
}

// Operator ==
bool Point3d::operator==(const Point3d &p)
{
    return ( (m_x == p.m_x)&&(m_y==p.m_y)&&(m_z==p.m_z) );
}

// Operator =
Point3d & Point3d::operator=(const Point3d &p)
{
    m_x = p.m_x;
    m_y = p.m_y;
    m_z = p.m_z;
    return *this;
}

// Friend operator <<
std::ostream & operator <<(std::ostream &out, Point3d &p)
{
    out << "(" << p.m_x << "," << p.m_y << "," << p.m_z << ")";
    return out;
}

// Friend operator +
Point3d operator +(const Point3d &p1, const Point3d &p2)
{
    return Point3d(p1.m_x + p2.m_x, p1.m_y + p2.m_y, p1.m_z + p2.m_z);
}

// Friend, Not a class member
double distanceBetween(const Point3d &p1, const Point3d &p2)
{
    double dx = p1.m_x - p2.m_x;
    double dy = p1.m_y - p2.m_y;
    double dz = p1.m_z - p2.m_z;
    return std::sqrt( dx*dx + dy*dy + dz*dz );
}



