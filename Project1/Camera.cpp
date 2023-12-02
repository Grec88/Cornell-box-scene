#include "Camera.h";

Camera::Camera() {}

void Camera::updateViewMatrix() {
	view_matrix = glm::lookAt(position, position + direction, up);
}