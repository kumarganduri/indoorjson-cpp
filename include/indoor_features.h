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

#include <memory>
#include <vector>

#include "ptr.h"
#include "thematic_layer.h"
#include "inter_layer_connection.h"

namespace indoor_json {

struct IndoorFeatures {
  std::vector<ThematicLayerPtr> layers;
  std::vector<InterLayerConnectionPtr> layer_connections;
};

DEFINE_PTR(IndoorFeatures)

}  // namespace indoor_json
