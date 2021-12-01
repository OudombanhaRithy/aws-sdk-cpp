﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/GetTrustStoreCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetTrustStoreCertificateRequest::GetTrustStoreCertificateRequest() : 
    m_thumbprintHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false)
{
}

Aws::String GetTrustStoreCertificateRequest::SerializePayload() const
{
  return {};
}

void GetTrustStoreCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_thumbprintHasBeenSet)
    {
      ss << m_thumbprint;
      uri.AddQueryStringParameter("thumbprint", ss.str());
      ss.str("");
    }

}



