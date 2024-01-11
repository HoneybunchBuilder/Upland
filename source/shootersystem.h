#pragma once

#include "simd.h"

typedef struct TbWorld TbWorld;
typedef uint64_t ecs_entity_t;

typedef struct UplProjectile {
  int placeholder;
} UplProjectile;

typedef struct UplShooterComponent {
  const char *prefab_name;
  float fire_rate;
  ecs_entity_t projectile_prefab;
  float last_fire_time;
} UplShooterComponent;

typedef struct UplWarp {
  const char *target_name;
} UplWarp;

#ifdef __cplusplus
extern "C" {
#endif

void upl_register_shooter_system(TbWorld *world);
void upl_unregister_shooter_system(TbWorld *world);

#ifdef __cplusplus
}
#endif