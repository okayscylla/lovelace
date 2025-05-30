#pragma once

class Vec2 {
    public:
    double x, y;

    Vec2 operator+(const Vec2& term) const;
    Vec2 operator-(const Vec2& term) const;
    Vec2 operator*(const Vec2& term) const;
    Vec2 operator/(const Vec2& term) const;

    Vec2 operator+(const double scalar) const;
    Vec2 operator-(const double scalar) const;
    Vec2 operator*(const double scalar) const;
    Vec2 operator/(const double scalar) const;

    Vec2& operator+(const Vec2& term);
    Vec2& operator-(const Vec2& term);
    Vec2& operator*(const Vec2& term);
    Vec2& operator/(const Vec2& term);

    Vec2& operator+(const double scalar);
    Vec2& operator-(const double scalar);
    Vec2& operator*(const double scalar);
    Vec2& operator/(const double scalar);

    bool operator==(const Vec2& term) const;
    bool operator!=(const Vec2& term) const;

    auto operator<=>(const Vec2& term) const;

    double dot(const Vec2& term) const;
    double length() const;
    double lengthSquared() const;

    Vec2 cross(const Vec2& term) const;
    Vec2& normalise();
    Vec2 normalised() const;
    Vec2 reflect(const Vec2& normal) const;

    Vec2() : x(0.0), y(0.0) {};
    Vec2(double a, double b) : x(a), y(b) {};
};