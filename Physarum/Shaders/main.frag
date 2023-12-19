#version 460
in vec2 uv;
in vec3 vertexOut;
in vec3 col;
layout(location = 0) out vec4 fragCol;

void main(){
	fragCol = vec4(uv,1.,1.);
	//fragCol = vec4(col,1.);

}