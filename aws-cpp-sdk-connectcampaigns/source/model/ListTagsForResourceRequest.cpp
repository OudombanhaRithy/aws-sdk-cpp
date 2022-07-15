﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  return {};
}




