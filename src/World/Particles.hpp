#pragma once
#include <Rendering/Rendering.hpp>
using namespace Stardust_Celeste;

namespace CrossCraft {

struct Particle {
    glm::vec3 position;
    std::array<float, 8> uv;
    glm::vec3 velocity;
};

class ParticleSystem {
  public:
    ParticleSystem(uint32_t tex);
    ~ParticleSystem();

    void initialize(uint32_t type, glm::vec3 pos);
    void generate();

    void update(double dt);
    void draw(glm::vec3 rot);

  private:
    unsigned int texture;

    std::vector<Particle> particles;

    uint16_t idx_counter;
    Rendering::Mesh<Rendering::Vertex> mesh;
};
} // namespace CrossCraft