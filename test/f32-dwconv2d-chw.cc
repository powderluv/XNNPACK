// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-dwconv2d-chw.yaml
//   Generator: tools/generate-dwconv2d-chw-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/dwconv.h>
#include "dwconv2d-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_height_div_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_height_lt_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_5X4, output_height_gt_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_5x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_height_div_6) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_height_lt_6) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_6X4, output_height_gt_6) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_6x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEON_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neon_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_height_div_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_height_lt_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_5X4, output_height_gt_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_5x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_height_div_6) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_height_lt_6) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_6X4, output_height_gt_6) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_6x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__NEONFMA_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__neonfma_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_3X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_height_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 7; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 16; input_height < 64; input_height += 8) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 9; input_height < 17; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_4X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 26; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEON_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neon_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_3X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_height_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 7; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 16; input_height < 64; input_height += 8) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 9; input_height < 17; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_4X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 26; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__NEONFMA_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__neonfma_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_height_div_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_height_lt_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_5X4, output_height_gt_5) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_5x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc5);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEON_4X4_ACC2, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neon_4x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_height_div_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_height_lt_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_5X4, output_height_gt_5) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_5x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc5);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_height_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_height_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__NEONFMA_4X4_ACC2, output_height_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__neonfma_4x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_1X4_ACC5, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_2X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEON_3X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neon_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_height_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_1X4_ACC5, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_height_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_2X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_height_eq_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__NEONFMA_3X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__neonfma_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_3X4, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_3x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_height_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_height_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_4X4, output_height_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_4x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_height_div_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_height_lt_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_5X4, output_height_gt_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_5x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_height_div_6) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_height_lt_6) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_6X4, output_height_gt_6) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_6x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSE_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__sse_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_height_eq_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_height_eq_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_3X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_3x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_height_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 7; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_height_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 16; input_height < 64; input_height += 8) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_height_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, output_height_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 9; input_height < 17; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_4X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 26; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_4x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__SSE_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__sse_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_height_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_height_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4, output_height_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_height_div_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_height_lt_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_5X4, output_height_gt_5) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_5x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc5);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_height_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_height_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__SSE_4X4_ACC2, output_height_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__sse_4x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_height_eq_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_height_eq_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC4, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_height_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, output_height_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_1X4_ACC5, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_height_eq_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_height_eq_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_height_div_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_height_lt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, output_height_gt_2) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_2X4_ACC3, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_height_eq_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_height_div_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_height_lt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, output_height_gt_3) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__SSE_3X4_ACC2, padding_top_eq_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__sse_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_height_div_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_height_lt_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4, output_height_gt_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_height_div_3) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_height_lt_3) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_3X4, output_height_gt_3) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_3x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_height_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_height_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_4X4, output_height_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_4x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_height_div_5) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_height_lt_5) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_5X4, output_height_gt_5) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_5x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_height_div_6) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_height_lt_6) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_6X4, output_height_gt_6) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_6x4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC2, output_height_gt_1) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC3, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC3, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC3, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC3, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC3, output_height_gt_1) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC4, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC4, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC4, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC4, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_1X4_ACC4, output_height_gt_1) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_width_eq_4) {
    TEST_REQUIRES_X86_SSSE3;
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_width_div_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_width_lt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_width_gt_4) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_height_div_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_height_lt_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__SSSE3_2X4_ACC2, output_height_gt_2) {
    TEST_REQUIRES_X86_SSSE3;
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__ssse3_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_3X4, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_4X4, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_height_div_5) {
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_height_lt_5) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_5X4, output_height_gt_5) {
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_5x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_height_div_6) {
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_height_lt_6) {
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_6X4, output_height_gt_6) {
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_6x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_ARM_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_3X4, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_4X4, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_height_div_5) {
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_height_lt_5) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_5X4, output_height_gt_5) {
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_5x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_height_div_6) {
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_height_lt_6) {
    for (size_t input_height = 1; input_height < 6; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_6X4, output_height_gt_6) {
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_6x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3P1__WASMSIMD_X86_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(1)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_height_eq_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_height_div_2) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, output_height_gt_2) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_height_eq_3) {
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_height_div_3) {
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, output_height_gt_3) {
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_3X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_height_eq_4) {
    for (size_t input_height = 7; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_height_div_4) {
    for (size_t input_height = 16; input_height < 64; input_height += 8) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, output_height_gt_4) {
    for (size_t input_height = 9; input_height < 17; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_4X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 26; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC3, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_1X4_ACC4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_height_eq_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_ARM_2X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_arm_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_height_eq_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_height_div_2) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, output_height_gt_2) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(6)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_height_eq_3) {
    for (size_t input_height = 5; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_height_div_3) {
    for (size_t input_height = 12; input_height < 48; input_height += 6) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, output_height_gt_3) {
    for (size_t input_height = 7; input_height < 13; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_3X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 20; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(8)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_height_eq_4) {
    for (size_t input_height = 7; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_height_div_4) {
    for (size_t input_height = 16; input_height < 64; input_height += 8) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, output_height_gt_4) {
    for (size_t input_height = 9; input_height < 17; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_4X4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 26; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC3, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_1X4_ACC4, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_height_eq_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(1)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_3X3S2P1__WASMSIMD_X86_2X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 14; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(3)
          .kernel_width(3)
          .subsampling(2)
          .padding_left(1)
          .padding_right(1)
          .padding_top(0)
          .padding_bottom(1)
          .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__wasmsimd_x86_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_ARM_1X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_arm_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_width_eq_4) {
    for (size_t input_width = 7; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 16; input_width < 64; input_width += 8) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 7; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(8)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 9; input_width < 17; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_height_eq_1) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5S2P2__WASMSIMD_X86_1X4_ACC2, padding_top_eq_1) {
    for (size_t input_height = 2; input_height < 8; input_height++) {
      for (size_t input_width = 1; input_width < 41; input_width += 7) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(2)
          .padding_left(2)
          .padding_right(2)
          .padding_top(1)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__wasmsimd_x86_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC5, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc5);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC5, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC5, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC5, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4_ACC5, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_1X4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4_ACC3, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_2X4, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4_ACC2, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_3X4, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4_ACC2, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_4X4, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_height_div_5) {
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_height_lt_5) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_ARM_5X4, output_height_gt_5) {
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_arm_5x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC2, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC3, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC5, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc5);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC5, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC5, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC5, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc5);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4_ACC5, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4_acc5);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(1)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_1X4, output_height_gt_1) {
    for (size_t input_height = 2; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_1x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC2, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4_ACC3, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4_acc3);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(2)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_height_div_2) {
    for (size_t input_height = 4; input_height < 16; input_height += 2) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_height_lt_2) {
    for (size_t input_height = 1; input_height < 2; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_2X4, output_height_gt_2) {
    for (size_t input_height = 3; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_2x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4_ACC2, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(3)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_height_div_3) {
    for (size_t input_height = 6; input_height < 24; input_height += 3) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_height_lt_3) {
    for (size_t input_height = 1; input_height < 3; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_3X4, output_height_gt_3) {
    for (size_t input_height = 4; input_height < 7; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_3x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4_ACC2, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4_acc2);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(4)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_height_div_4) {
    for (size_t input_height = 8; input_height < 32; input_height += 4) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_height_lt_4) {
    for (size_t input_height = 1; input_height < 4; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_4X4, output_height_gt_4) {
    for (size_t input_height = 5; input_height < 9; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_4x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_width_eq_4) {
    DWConv2DMicrokernelTester()
      .input_width(4)
      .input_height(5)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_width_div_4) {
    for (size_t input_width = 8; input_width < 32; input_width += 4) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_width_lt_4) {
    for (size_t input_width = 1; input_width < 4; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(4)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_width_gt_4) {
    for (size_t input_width = 5; input_width < 9; input_width++) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(5)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_height_div_5) {
    for (size_t input_height = 10; input_height < 40; input_height += 5) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_height_lt_5) {
    for (size_t input_height = 1; input_height < 5; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
      }
    }
  }

  TEST(F32_DWCONV2D_CHW_5X5P2__WASMSIMD_X86_5X4, output_height_gt_5) {
    for (size_t input_height = 6; input_height < 11; input_height++) {
      for (size_t input_width = 1; input_width < 21; input_width += 3) {
        DWConv2DMicrokernelTester()
          .input_width(input_width)
          .input_height(input_height)
          .kernel_height(5)
          .kernel_width(5)
          .subsampling(1)
          .padding_left(2)
          .padding_right(2)
          .padding_top(2)
          .padding_bottom(2)
          .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__wasmsimd_x86_5x4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(2)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1, output_height_div_2) {
  for (size_t input_height = 4; input_height < 16; input_height += 2) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 2; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1, output_height_gt_2) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_3X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(3)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_3X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(3)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_3X1, output_height_div_3) {
  for (size_t input_height = 6; input_height < 24; input_height += 3) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_3X1, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_3X1, output_height_gt_3) {
  for (size_t input_height = 4; input_height < 16; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_4X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(4)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_4X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_4X1, output_height_div_4) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_4X1, output_height_lt_4) {
  for (size_t input_height = 1; input_height < 4; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_4X1, output_height_gt_4) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_5X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(5)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_5x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_5X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(5)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_5x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_5X1, output_height_div_5) {
  for (size_t input_height = 10; input_height < 40; input_height += 5) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_5x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_5X1, output_height_lt_5) {
  for (size_t input_height = 1; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_5x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_5X1, output_height_gt_5) {
  for (size_t input_height = 6; input_height < 26; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_5x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_6X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(6)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_6x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_6X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_6x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_6X1, output_height_div_6) {
  for (size_t input_height = 12; input_height < 48; input_height += 6) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_6x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_6X1, output_height_lt_6) {
  for (size_t input_height = 1; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_6x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_6X1, output_height_gt_6) {
  for (size_t input_height = 7; input_height < 31; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_6x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC2, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC2, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC3, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC3, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC4, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC4, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_1X1_ACC4, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1_ACC2, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(2)
    .kernel_height(3)
    .kernel_width(3)
    .subsampling(1)
    .padding_left(1)
    .padding_right(1)
    .padding_top(1)
    .padding_bottom(1)
    .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(1)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1_ACC2, output_height_div_2) {
  for (size_t input_height = 4; input_height < 16; input_height += 2) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1_ACC2, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 2; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3P1__SCALAR_2X1_ACC2, output_height_gt_2) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(1)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_height_eq_2) {
  for (size_t input_height = 3; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_height_div_2) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, output_height_gt_2) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 14; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_height_eq_3) {
  for (size_t input_height = 5; input_height < 7; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_height_div_3) {
  for (size_t input_height = 12; input_height < 48; input_height += 6) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, output_height_gt_3) {
  for (size_t input_height = 7; input_height < 31; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_3X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 20; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(8)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(8)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_height_eq_4) {
  for (size_t input_height = 7; input_height < 9; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_height_div_4) {
  for (size_t input_height = 16; input_height < 64; input_height += 8) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_height_lt_4) {
  for (size_t input_height = 1; input_height < 7; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, output_height_gt_4) {
  for (size_t input_height = 9; input_height < 41; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_4X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 26; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_4x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC2, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC2, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC2, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC2, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC3, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC3, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC3, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC3, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC4, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC4, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC4, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC4, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_1X1_ACC4, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(3)
      .kernel_width(3)
      .subsampling(2)
      .padding_left(1)
      .padding_right(1)
      .padding_top(1)
      .padding_bottom(1)
      .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_height_eq_2) {
  for (size_t input_height = 3; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_height_div_2) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, output_height_gt_2) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(1)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_3X3S2P1__SCALAR_2X1_ACC2, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 14; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(3)
        .kernel_width(3)
        .subsampling(2)
        .padding_left(1)
        .padding_right(1)
        .padding_top(0)
        .padding_bottom(1)
        .Test(xnn_f32_dwconv2d_chw_ukernel_3x3s2p1__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(2)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1, output_height_div_2) {
  for (size_t input_height = 4; input_height < 16; input_height += 2) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 2; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1, output_height_gt_2) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(3)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1, output_height_div_3) {
  for (size_t input_height = 6; input_height < 24; input_height += 3) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1, output_height_gt_3) {
  for (size_t input_height = 4; input_height < 16; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC2, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC2, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC3, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC3, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC4, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC4, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC4, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC5, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(1)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC5, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(1)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_1X1_ACC5, output_height_gt_1) {
  for (size_t input_height = 2; input_height < 6; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC2, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(2)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC2, output_height_div_2) {
  for (size_t input_height = 4; input_height < 16; input_height += 2) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC2, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 2; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC2, output_height_gt_2) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC3, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(2)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC3, output_height_div_2) {
  for (size_t input_height = 4; input_height < 16; input_height += 2) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC3, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 2; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_2X1_ACC3, output_height_gt_2) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1_ACC2, output_width_eq_1) {
  DWConv2DMicrokernelTester()
    .input_width(1)
    .input_height(3)
    .kernel_height(5)
    .kernel_width(5)
    .subsampling(1)
    .padding_left(2)
    .padding_right(2)
    .padding_top(2)
    .padding_bottom(2)
    .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 2; input_width < 6; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(3)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(1)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1_ACC2, output_height_div_3) {
  for (size_t input_height = 6; input_height < 24; input_height += 3) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1_ACC2, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5P2__SCALAR_3X1_ACC2, output_height_gt_3) {
  for (size_t input_height = 4; input_height < 16; input_height++) {
    for (size_t input_width = 1; input_width < 6; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(1)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}


TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_height_eq_2) {
  for (size_t input_height = 3; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_height_div_2) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, output_height_gt_2) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 14; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_height_eq_3) {
  for (size_t input_height = 5; input_height < 7; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_height_div_3) {
  for (size_t input_height = 12; input_height < 48; input_height += 6) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, output_height_gt_3) {
  for (size_t input_height = 7; input_height < 31; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 20; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC2, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC2, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC2, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC2, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC3, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC3, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC3, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC3, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC4, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC4, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC4, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC4, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC4, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc4, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC5, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC5, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(2)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC5, output_height_eq_1) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC5, output_height_gt_1) {
  for (size_t input_height = 3; input_height < 11; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_1X1_ACC5, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 8; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_1x1_acc5, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_height_eq_2) {
  for (size_t input_height = 3; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_height_div_2) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, output_height_gt_2) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC2, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 14; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(4)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_height_eq_2) {
  for (size_t input_height = 3; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_height_div_2) {
  for (size_t input_height = 8; input_height < 32; input_height += 4) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_height_lt_2) {
  for (size_t input_height = 1; input_height < 3; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, output_height_gt_2) {
  for (size_t input_height = 5; input_height < 21; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_2X1_ACC3, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 14; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_2x1_acc3, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_width_eq_1) {
  for (size_t input_width = 1; input_width < 3; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_width_gt_1) {
  for (size_t input_width = 3; input_width < 11; input_width++) {
    DWConv2DMicrokernelTester()
      .input_width(input_width)
      .input_height(6)
      .kernel_height(5)
      .kernel_width(5)
      .subsampling(2)
      .padding_left(2)
      .padding_right(2)
      .padding_top(2)
      .padding_bottom(2)
      .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_height_eq_3) {
  for (size_t input_height = 5; input_height < 7; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_height_div_3) {
  for (size_t input_height = 12; input_height < 48; input_height += 6) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_height_lt_3) {
  for (size_t input_height = 1; input_height < 5; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, output_height_gt_3) {
  for (size_t input_height = 7; input_height < 31; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(2)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}

TEST(F32_DWCONV2D_CHW_5X5S2P2__SCALAR_3X1_ACC2, padding_top_eq_1) {
  for (size_t input_height = 2; input_height < 20; input_height++) {
    for (size_t input_width = 1; input_width < 11; input_width += 1) {
      DWConv2DMicrokernelTester()
        .input_width(input_width)
        .input_height(input_height)
        .kernel_height(5)
        .kernel_width(5)
        .subsampling(2)
        .padding_left(2)
        .padding_right(2)
        .padding_top(1)
        .padding_bottom(2)
        .Test(xnn_f32_dwconv2d_chw_ukernel_5x5s2p2__scalar_3x1_acc2, DWConv2DMicrokernelTester::Variant::Scalar);
    }
  }
}