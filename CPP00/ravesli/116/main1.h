//
// Created by Nelson Amerei on 6/28/21.
//

#ifndef INC_116_MAIN1_H
#define INC_116_MAIN1_H
#include <iostream>

class Ball {
private:
	std::string m_color;
	double m_radius;

public:
//конструктор по умолчанию без параметров
	Ball(double radius) {
		m_color = "red";
		m_radius = radius;
	}

// Конструктор с параметром color (для radius предоставлено значение по умолчанию)
//	Ball(const std::string &color) : m_radius(20.0) {
//		m_color = color;
//	}
////
//	Ball(double radius) : m_color("red") {
////		assert(m_radius != 0);
//		m_radius = radius;
//	}
//
//	Ball(const std::string &color, double radius) : m_color("red"), m_radius(20.0) {}

	Ball(const std::string &color="red", double radius=20.0)
	{
		m_color = color;
		m_radius = radius;
	}

	void setMColor(const std::string &mColor) {
		m_color = mColor;
	}


	void setMRadius(double mRadius) {
		m_radius = mRadius;
	}

	void setBoth(const std::string &mColor, double mRadius) {
		m_color = mColor;
		m_radius = mRadius;
	}

	const std::string &getMColor() const {
		return m_color;
	}

	double getMRadius() const {
		return m_radius;
	}

	void print() const {
		std::cout << "color: " << Ball::getMColor() << std::endl;
		std::cout << "radius: " << Ball::getMRadius() << std::endl;
	}
};

#endif //INC_116_MAIN1_H
