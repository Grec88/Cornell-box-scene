#include "Camera.h";

Camera::Camera() {}

void Camera::updateViewMatrix() {
    using glm::vec3;
    using glm::sin;
    using glm::cos;


    direction = vec3(-sin(yaw) * cos(pitch), sin(pitch), -cos(pitch) * cos(yaw));
    right = vec3(cos(yaw), 0, -sin(yaw));
    up = glm::cross(right, direction);

    view_matrix = glm::lookAt(position, position + direction, up);
}