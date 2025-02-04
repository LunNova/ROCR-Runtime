/*
 * =============================================================================
 *   ROC Runtime Conformance Release License
 * =============================================================================
 * The University of Illinois/NCSA
 * Open Source License (NCSA)
 *
 * Copyright (c) 2021-2021, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Developed by:
 *
 *                 AMD Research and AMD ROC Software Development
 *
 *                 Advanced Micro Devices, Inc.
 *
 *                 www.amd.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 *  - Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimers.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimers in
 *    the documentation and/or other materials provided with the distribution.
 *  - Neither the names of <Name of Development Group, Name of Institution>,
 *    nor the names of its contributors may be used to endorse or promote
 *    products derived from this Software without specific prior written
 *    permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS WITH THE SOFTWARE.
 *
 */

#ifndef ROCRTST_SUITES_FUNCTIONAL_CU_MASKING_H_
#define ROCRTST_SUITES_FUNCTIONAL_CU_MASKING_H_
#include <vector>

#include "suites/test_common/test_base.h"
#include "common/base_rocr.h"
#include "common/common.h"

// @Brief: This class is defined to measure the mean latency of enqueuing
//  the packets to an empty kernel

class CU_Masking : public TestBase {
 public:
  // @Brief: Constructor
  explicit CU_Masking();

  // @Brief: Destructor
  virtual ~CU_Masking() {}

  // @Brief: Set up the environment for the test
  virtual void SetUp() { TestBase::SetupPrint(); }

  // @Brief: Run the test case
  virtual void Run();

  // @Brief: Clean up and close the runtime
  virtual void Close() { TestBase::ClosePrint(); }

 private:
  // @Brief: Get actual iteration number
  virtual size_t RealIterationNum() { return num_iteration(); }
};

#endif  // ROCRTST_SUITES_FUNCTIONAL_CU_MASKING_H_
