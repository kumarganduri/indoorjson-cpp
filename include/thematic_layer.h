/*
 * thematic_layer.h
 *
 * Copyright (c) 2023 IndoorJson
 *
 * Author: Kunlin Yu <yukunlin@syriusrobotics.com>
 * Create Date: 2023/12/22
 *
 */
#pragma once

#include "dual_space_layer.h"
#include "feature.h"
#include "primal_space_layer.h"
#include "ptr.h"

namespace indoor_json {

enum Theme { Topographic, Sensor, Logical, Unknown, Property, Other };

struct ThematicLayer : Feature {
  Theme theme;
  PrimalSpaceLayerPtr primal_space;
  DualSpaceLayerPtr dual_space;
};

DEFINE_PTR(ThematicLayer)

}  // namespace indoor_json