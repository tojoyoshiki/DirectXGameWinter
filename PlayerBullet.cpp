#include "PlayerBullet.h"

KamataEngine::Vector3 PlayerBullet::GetWorldPosition()
{
	KamataEngine::Vector3 worldPos;

	worldPos.x = worldTransform_.translation_.x;
	worldPos.y = worldTransform_.translation_.y;
	worldPos.z = worldTransform_.translation_.z;

	return worldPos;
}

void PlayerBullet::Initialize(KamataEngine::Model* model,
	KamataEngine::Vector3& position, KamataEngine::Vector3& velocity)
{
	assert(model);

	model_ = model;
	textureHandle_ = TextureManager::Load("./Resources/white1x1.png");

	worldTransform_.Initialize();

	worldTransform_.translation_ = position;

	velocity_ = velocity;
}

void PlayerBullet::Update()
{
	worldTransform_.UpdateMatrix();

	worldTransform_.translation_ += velocity_;

	if (--deathTimer_ <= 0) {
		isDead_ = true;
	}
}

void PlayerBullet::Draw(KamataEngine::Camera& camera)
{
	model_->Draw(worldTransform_, camera,
		textureHandle_);
}

void PlayerBullet::OnCollision()
{
	isDead_ = true;
}
