﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ImportCrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportCrlResult::ImportCrlResult()
{
}

ImportCrlResult::ImportCrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportCrlResult& ImportCrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("crl"))
  {
    m_crl = jsonValue.GetObject("crl");

  }



  return *this;
}
