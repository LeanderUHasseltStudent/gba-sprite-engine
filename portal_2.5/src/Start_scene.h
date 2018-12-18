//
// Created by Wouter Groeneveld on 02/08/18.
//

#ifndef GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H
#define GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H

#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/sprites/affine_sprite.h>
#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include "Portal_bullet.h"

class Start_scene : public Scene {
private:
    std::unique_ptr<Sprite> chell;
    std::unique_ptr<SpriteBuilder<Sprite>> spriteBuilder1, spriteBuilder2;

public:
    std::vector<Sprite *> sprites() override;
    std::vector<Background *> backgrounds() override;

    Start_scene(std::shared_ptr<GBAEngine> engine) : Scene(engine) {}


    void load() override;
    void tick(u16 keys) override;

};


#endif //GBA_SPRITE_ENGINE_SAMPLE_START_SCENE_H