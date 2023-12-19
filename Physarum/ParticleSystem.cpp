#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(int particles)
{
	m_particles = particles;
	GLuint m_ssbo = 0;
	Particle p;
	m_ssboData = std::vector<Particle>(particles, p);
}

void ParticleSystem::SetUpSSBO()
{
	glGenBuffers(1, &m_ssbo);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, m_ssbo);
	glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(Particle) * m_particles, &m_ssboData[0], GL_DYNAMIC_COPY);

	glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 1, m_ssbo);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0);
}

ParticleSystem::~ParticleSystem()
{
}

