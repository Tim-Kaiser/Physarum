#version 460

in vec3 vertex;
in vec2 textureCoord;

struct Particle
{
	vec2 pos;
	vec3 col;
};

layout(std430, binding = 0) restrict buffer ssbo
{
	Particle Particles[];
} particles;

out vec3 col;
out vec2 uv;
out vec3 vertexOut;

void main(){
	Particle p = particles.Particles[gl_VertexID];
	gl_Position = vec4(vertex, 1.0);

	uv = textureCoord;
	col = p.col;
	vertexOut = vec3(textureCoord, 0.);
}