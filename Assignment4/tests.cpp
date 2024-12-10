#include "gtest/gtest.h"
#include "transformer.h"
#include "gun_type.h"
#include "voice.h"
#include "sniper.h"


TEST(Gun_type, check_gun_type_class) {
    Gun gun("AKM", 30, 30);
    EXPECT_EQ(gun.gun_type(), "AKM");
    EXPECT_EQ(gun.ammo(), 30);
    EXPECT_EQ(gun.damage(), 30);
    gun.set_gun_type("AWP");
    gun.set_damage(50);
    gun.set_ammo(45);
    EXPECT_EQ(gun.gun_type(), "AWP");
    EXPECT_EQ(gun.damage(), 50);
    EXPECT_EQ(gun.ammo(), 45);
}

TEST(Transformer, check_transformer_parameters) {
    Gun gun("AKM", 30, 90);

    Transformer transformer("Transformer", "Divine", 200, gun.gun_type(), gun.damage(), gun.ammo(), 100);

    EXPECT_EQ(transformer.name(), "Transformer");
    EXPECT_EQ(transformer.fraction(), "Divine");
    EXPECT_EQ(transformer.health(), 200);
    EXPECT_EQ(transformer.gun_type(), gun.gun_type());
    EXPECT_EQ(transformer.damage(), gun.damage());
    EXPECT_EQ(transformer.ammo(), gun.ammo());
    EXPECT_EQ(transformer.move_speed(), 100);

    gun.set_gun_type("AWP");
    gun.set_damage(70);
    gun.set_ammo(30);

    transformer.set_name("Prime");
    transformer.set_fraction("Autobot");
    transformer.set_health(100);
    transformer.set_gun_type(gun.gun_type());
    transformer.set_damage(gun.damage());
    transformer.set_ammo(gun.ammo());
    transformer.set_move_speed(130);

    EXPECT_EQ(transformer.name(), "Prime");
    EXPECT_EQ(transformer.fraction(), "Autobot");
    EXPECT_EQ(transformer.health(), 100);
    EXPECT_EQ(transformer.gun_type(), gun.gun_type());
    EXPECT_EQ(transformer.damage(), gun.damage());
    EXPECT_EQ(transformer.ammo(), gun.ammo());
    EXPECT_EQ(transformer.move_speed(), 130);
}

TEST(Transformer, check_transformer_methods) {
    Gun gun("AKM", 30, 90);

    Transformer transformer("Transformer", "Divine", 200, gun.gun_type(), gun.damage(), gun.ammo(), 100);

    EXPECT_TRUE(transformer.transform());
    EXPECT_TRUE(transformer.attack());
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.jump());
    EXPECT_TRUE(transformer.ultimate());
    EXPECT_TRUE(transformer.phrase());
}

TEST(Transformer, check_constructor_overloading) {
    Voice voice("English");
    Gun gun("AKM", 30, 90);
    Transformer transformer("Transformer", "Divine", 200, gun.gun_type(), gun.damage(), gun.ammo(), 100, voice);
    EXPECT_EQ(transformer.voice()->voice(), voice.voice());
    voice.set_voice("Russian");
    transformer.voice()->set_voice(voice.voice());
    EXPECT_EQ(transformer.voice()->voice(), voice.voice());
}

TEST(Transformer, check_operators) {
    Gun gun("AKM", 30, 90);
    Gun awp("AWP", 70, 30);
    Transformer transformer("Transformer", "Divine", 200, gun.gun_type(), gun.damage(), gun.ammo(), 100);
    Sniper sniper("Sniper", "Autobot", 80, awp.gun_type(), awp.damage(), awp.ammo(), 70);

    EXPECT_TRUE(transformer > sniper);
    EXPECT_FALSE(transformer < sniper);
    EXPECT_FALSE(transformer == sniper);
    EXPECT_TRUE(transformer != sniper);
    EXPECT_TRUE(transformer >= sniper);
    EXPECT_FALSE(transformer <=sniper);

    transformer.set_health(50);

    EXPECT_FALSE(transformer > sniper);
    EXPECT_TRUE(transformer < sniper);
    EXPECT_FALSE(transformer >= sniper);
    EXPECT_TRUE(transformer <= sniper);

    sniper.set_health(100);
    transformer.set_health(100);

    EXPECT_FALSE(transformer > sniper);
    EXPECT_FALSE(transformer < sniper);
    EXPECT_TRUE(transformer >= sniper);
    EXPECT_TRUE(transformer <= sniper);
    EXPECT_TRUE(transformer == sniper);
    EXPECT_FALSE(transformer != sniper);
}
