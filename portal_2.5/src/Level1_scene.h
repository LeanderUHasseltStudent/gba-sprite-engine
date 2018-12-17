//
// Created by Wouter Groeneveld on 02/08/18.
//

#ifndef GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H
#define GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H

#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/sprites/affine_sprite.h>
#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include "Portal_bullet.h"
#include "Portal_physics.h"

class Level1_scene : public Scene {
private:
    std::unique_ptr<Sprite> chell, red_bullet_sprite, blue_bullet_sprite, verticalPortalWall, verticalWall, horizontalPortalWall, horizontalWall, verticalRedPortal, verticalBluePortal;
    std::unique_ptr<AffineSprite> visier;
    std::unique_ptr<Portal_bullet> redBullet, blueBullet;
    std::unique_ptr<Background> bg;
    std::vector<std::vector<int>> verticalPortalWallCoordinaten;
    std::vector<std::vector<int>>horizontalPortalWallCoordinaten = {{40,140},{72,140},{104,140},{136,140},{168,140},{200,140}};
    std::vector<std::vector<int>>verticalWallCoordinaten;
    std::vector<std::vector<int>> horizontalWallCoordinaten;
    std::vector<std::unique_ptr<Sprite>> verticalPortalWallVec,verticalWallVec, horizontalPortalWallVec, horizontalWallVec;
    int chellX, chellY;
    int teller = 0;
    int visierRotation, jump;
    bool flip_visier;

public:
    std::vector<Sprite *> sprites() override;
    std::vector<Background *> backgrounds() override;

    Level1_scene(std::shared_ptr<GBAEngine> engine) : Scene(engine) {}


    void load() override;
    void tick(u16 keys) override;
    void moveChell(u16 keys);

};


#endif //GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H
