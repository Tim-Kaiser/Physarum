#pragma once
#include <vector>
#include "Particle.h"
#include <glad/glad.h>

class ParticleSystem
{
private:
	int m_particles;
	GLuint m_ssbo;
	std::vector<Particle> m_ssboData;
public:
	ParticleSystem(int particles);
	~ParticleSystem();

	void SetUpSSBO();
};