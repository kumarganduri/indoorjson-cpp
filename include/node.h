/*
 * node.h
 *
 * Copyright (c) 2023 Syrius Robotics
 *
 * Author: Kunlin Yu <yukunlin@syriusrobotics.com>
 * Create Date: 2023/12/22
 *
 */
#pragma once

#include <memory>
#include <vector>

#include <geos/geom/Geometry.h>

#include "ptr.h"

FORWARD_DEC_WPTR(CellSpace)
FORWARD_DEC_WPTR(Edge)

namespace indoor_json {

struct Node {
  geos::geom::Geometry::Ptr geom;
  CellSpaceWPtr space;
  std::vector<EdgeWPtr> edges;
};

DEFINE_PTR(Node)

}  // namespace indoor_json