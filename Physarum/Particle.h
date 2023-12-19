#pragma once
#include <glm.hpp>

class Particle {

private:
	glm::vec2 m_pos;
	glm::vec3 m_col;
public:
	Particle();
	Particle(const Particle&);
	~Particle();
};