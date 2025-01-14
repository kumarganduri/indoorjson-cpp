/*
 * serialization.h
 *
 * Copyright (c) 2023 Syrius Robotics
 *
 * Author: Kunlin Yu <yukunlin@syriusrobotics.com>
 * Create Date: 2023/12/22
 *
 */

#pragma once

#include <nlohmann/json.hpp>

#include "cell_space.h"
#include "indoor_features.h"

using json = nlohmann::json;

namespace indoor_json {

void to_json(json &j, const Feature &feature);

void from_json(const json &j, Feature &feature);

void to_json(json &j, const Node &node);

void from_json(const json &j, Node &node);

void to_json(json &j, const CellSpace &space);

}  // namespace indoor_json