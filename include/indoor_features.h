/*
 * indoor_features.h
 *
 * Copyright (c) 2023 IndoorJson
 *
 * Author: Kunlin Yu <yukunlin@syriusrobotics.com>
 * Create Date: 2023/12/22
 *
 */
#pragma once

#include <vector>

#include "feature.h"
#include "inter_layer_connection.h"
#include "ptr.h"
#include "thematic_layer.h"

namespace indoor_json {

struct IndoorFeatures : Feature {
  std::vector<ThematicLayerPtr> layers;
  std::vector<InterLayerConnectionPtr> layer_connections;
};

DEFINE_PTR(IndoorFeatures)

}  // namespace indoor_json
