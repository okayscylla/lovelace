#include "vectors/Vec2.h"
#include "Constants.h"
#include <cmath>
#include <cstdlib>
#include <stdexcept>

Vec2 Vec2::operator+(const Vec2& term) const {
    return Vec2(x + term.x, y + term.y);
}

Vec2 Vec2::operator-(const Vec2& term) const {
    return Vec2(x - term.x, y - term.y);
}

Vec2 Vec2::operator*(const Vec2& term) const {
    return Vec2(x * term.x, y * term.y);
}

Vec2 Vec2::operator/(const Vec2& term) const {
    if (std::abs(term.x) < EPSILON || std::abs(term.y) < EPSILON) {
        throw std::invalid_argument("Cannot divide by a Vec2 with a x/y value of 0");
    } else {
        return Vec2(x / term.x, y / term.y);
    }
}

Vec2 Vec2::operator+(const double scalar) const {
    return Vec2(x + scalar, y + scalar);
}

Vec2 Vec2::operator-(const double scalar) const {
    return Vec2(x - scalar, y - scalar);
}

Vec2 Vec2::operator*(const double scalar) const {
    return Vec2(x * scalar, y * scalar);
}

Vec2 Vec2::operator/(const double scalar) const {
    if (std::abs(scalar) < EPSILON) {
        throw std::invalid_argument("Cannot divide by a scalar with a value of 0");
    } else {
        return Vec2(x / scalar, y / scalar);
    }
}

Vec2& Vec2::operator+=(const Vec2& term) {
    x = x + term.x;
    y = y + term.y;

    return *this;
}

Vec2& Vec2::operator-=(const Vec2& term) {
    x = x - term.x;
    y = y - term.y;

    return *this;
}

Vec2& Vec2::operator*=(const Vec2& term) {
    x = x * term.x;
    y = y * term.y;

    return *this;
}

Vec2& Vec2::operator/=(const Vec2& term) {
    if (std::abs(term.x) < EPSILON || std::abs(term.y) < EPSILON) {
        throw std::invalid_argument("Cannot divide by a Vec2 with a x/y value of 0");
    } else {
        x = x / term.x;
        y = y / term.y;

        return *this;
    }
}

Vec2& Vec2::operator+=(const double scalar) {
    x = x + scalar;
    y = y + scalar;

    return *this;
}

Vec2& Vec2::operator-=(const double scalar) {
    x = x - scalar;
    y = y - scalar;

    return *this;
}

Vec2& Vec2::operator*=(const double scalar) {
    x = x * scalar;
    y = y * scalar;

    return *this;
}

Vec2& Vec2::operator/=(const double scalar) {
    if (std::abs(scalar) < EPSILON) {
        throw std::invalid_argument("Cannot divide by a scalar with a value of 0");
    } else {
        x = x / scalar;
        y = y / scalar;

        return *this;
    }
}

bool Vec2::operator>(const Vec2& term) const {
    if (std::abs(x - term.x) > EPSILON && std::abs(y - term.y) > EPSILON) {
        return (term.x > x && term.y > y);
    } else {
        return false;
    }
}

bool Vec2::operator<(const Vec2& term) const {
    if (std::abs(x - term.x) > EPSILON && std::abs(y - term.y) > EPSILON) {
        return (term.x < x && term.y < y);
    } else {
        return false;
    }
}

bool Vec2::operator==(const Vec2& term) const {
    return (std::abs(x - term.x) < EPSILON && std::abs(y - term.y) < EPSILON);
}

bool Vec2::operator!=(const Vec2& term) const {
    return !(std::abs(x - term.x) < EPSILON && std::abs(y - term.y) < EPSILON);
}

bool Vec2::operator>(const double scalar) const {
    if (std::abs(x - scalar) > EPSILON && std::abs(y - scalar) > EPSILON) {
        return (scalar > x && scalar > y);
    } else {
        return false;
    }
}

bool Vec2::operator<(const double scalar) const {
    if (std::abs(x - scalar) > EPSILON && std::abs(y - scalar) > EPSILON) {
        return (scalar < x && scalar < y);
    } else {
        return false;
    }
}

bool Vec2::operator==(const double scalar) const {
    return (std::abs(x - scalar) < EPSILON && std::abs(y - scalar) < EPSILON);
}

bool Vec2::operator!=(const double scalar) const {
    return !(std::abs(x - scalar) < EPSILON && std::abs(y - scalar) < EPSILON);
}

double Vec2::dot(const Vec2& term) const {
    return x * term.x + y * term.y;
}

double Vec2::length() const {
    return std::sqrt(x * x + y * y);
}

double Vec2::lengthSquared() const {
    return x * x + y * y;
}