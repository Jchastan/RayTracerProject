#pragma once

#include <optixu/optixu_math_namespace.h>
#include <optixu/optixu_matrix_namespace.h>

#include "Config.h"
#include "Geometries.h"
#include "Light.h"

struct Scene
{
    // Info about the output image
    std::string outputFilename;
    unsigned int width, height;

    Config config;

    std::string integratorName = "raytracer";

    unsigned int light_samples;

    unsigned int light_stratify;

    std::vector<optix::float3> vertices;

    std::vector<Triangle> triangles;
    std::vector<Sphere> spheres;

    std::vector<DirectionalLight> dlights;
    std::vector<PointLight> plights;
    std::vector<QuadLight> qlights;

    Scene()
    {
        outputFilename = "raytrace.png";
        integratorName = "raytracer";
        light_stratify = 0;
        light_samples = 1;

    }
};