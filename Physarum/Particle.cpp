#include "Particle.h"

Particle::Particle()
{
	m_pos = glm::vec2(0.5,0.5);
	m_col = glm::vec3(1,1,1);
}
Particle::Particle(const Particle& cpy)
{
	m_pos = cpy.m_pos;
	m_col = cpy.m_col;
}
Particle::~Particle()
{
}
