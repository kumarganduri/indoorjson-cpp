/*
 * inter_layer_connection.h
 *
 * Copyright (c) 2023 IndoorJson
 *
 * Author: Kunlin Yu <yukunlin@syriusrobotics.com>
 * Create Date: 2023/12/22
 *
 */
#pragma once

#include <memory>
#include <string>
#include <vector>

#include "ptr.h"
#include "thematic_layer.h"

namespace indoor_json {

struct InterLayerConnection {
  std::string comment;
  std::vector<ThematicLayerWPtr> layers;
  std::vector<CellSpaceWPtr> spaces;
  std::vector<NodeWPtr> nodes;
};

DEFINE_PTR(InterLayerConnection)

}  // namespace indoor_json