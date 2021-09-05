#ifndef CLOTH
#define CLOTH
#include "common.h"
#include "core.h"
void generate_cloth_mesh(int sizeX, int sizeY, float gridWidth, glm::vec3 topLeft,
                         Shader *clothShader, std::vector<Vertex> &verts,
                         std::vector<unsigned int> &indices, std::vector<Stick> &sticks);

void simulate(Mesh *mesh);
#endif