#pragma once
#include <glm/glm.hpp>
#include <string>
#include "MeshModel.h"
#include "Camera.h"


class Utils
{
public:
	
	static glm::vec4 Vec4FromVec3(const glm::vec3 & vector3);
	static glm::vec3 Vec3fFromStream(std::istream& issLine);
	static glm::vec2 Vec2fFromStream(std::istream& issLine);
	static std::shared_ptr<MeshModel> LoadMeshModel(const std::string& filePath);
	static std::shared_ptr<Camera> LoadCamera(const glm::vec3 _eye, const glm::vec3 _at, const glm::vec3 _up);
	static std::string GetFileName(const std::string& filePath);
};
