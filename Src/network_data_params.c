/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Sep 30 21:03:34 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[274] = {
  0xbe0200753dfbf6c2U, 0x3e26a42bbdd0aa7bU, 0x3e492831be6f7751U, 0x3dec5a2fbd876099U,
  0x3bdb06f33d7cc46cU, 0x3c9640a1bd8312cdU, 0xbe20326cbc77043bU, 0xbd5b9364bd30d819U,
  0x3c02eb8f3d221f2cU, 0x3dfeb2db3e8d0836U, 0xbe135a53be3f9098U, 0xbe01c646bdd1dfe4U,
  0xbc96a9b23c6b8bacU, 0x3e4c18a73e6517f3U, 0x3e152e12be677c7cU, 0x3e8e85de3d860eacU,
  0x419a1b783e3d4598U, 0x413c8cb5414ff032U, 0xc0604be6bfac53d1U, 0xbe3c1bbfc0129b1fU,
  0x3b0a7a843dc3d662U, 0xbc6beca6be6ae013U, 0xbe393a5abdc5f7a0U, 0x3ddc439e3e229545U,
  0xbe024a853e8e8658U, 0xbba71b49be0263d9U, 0x3dccb25e3e1f0465U, 0xbd9fc55fbcf68d7eU,
  0xbd9830513de1921eU, 0x3c9659483e644c70U, 0x3dfeb7f1be70da5bU, 0xbdcf57cbbdca323fU,
  0x3e3c8b493c97b51cU, 0xbe3138553e33e8d4U, 0x3d6c67cd3dddb6ebU, 0x3c21f244bdcff30aU,
  0xbe2cda93bde15d5dU, 0x3c8b0b433c0af46dU, 0x3d329f3f3e447f52U, 0xbd3d5eb43d45bdb5U,
  0x3d4afd7d3d9464a8U, 0x3dcb219d3e3a4c7fU, 0x3d5c9ed2bdea791cU, 0x3d001c02bdb33102U,
  0x3e1871233e1e67daU, 0xbe0a67f3be519f7cU, 0xbdd48bcd3e00f254U, 0xbe83e417bdca6c04U,
  0x3e2227e73d3d09f1U, 0x3cbe1f583e22163fU, 0x3e5c9402bcda399aU, 0xbe0436f9bde0b8c3U,
  0xbd2ad331be2d483cU, 0xbe53a3943e0cd20fU, 0x3dc541643e3573d2U, 0xbdd41b903e717727U,
  0x3b01459d3d9bdd25U, 0x3d93aec13e7e7e44U, 0x3e0f3db5bbcfff1bU, 0x4049f85a3e112f91U,
  0x401782fa402d2a96U, 0x3fe2dc5e3fdb8d4aU, 0xbf014a99bf64ade8U, 0xbf0ddcd0becaf5b7U,
  0xbdac36e3bf0898c1U, 0x3dadda923dac650bU, 0x3e11804fbde991f0U, 0xbdaabd4a3d44c716U,
  0xbe2c2cf63e6b70e8U, 0x3df925c6bd562732U, 0xbca8dabfbd9795f3U, 0x3de534bbbce060ccU,
  0xbd8604fa3dc022bfU, 0x3e198e7a3e267285U, 0x3decb80a3e7fe4ebU, 0xbd234c0d3da9db6cU,
  0x3e5aa4ec3d9d2156U, 0xbdcef9b63da0c70bU, 0x3e0ea5e2be11c0bcU, 0x3d8292a43c77206bU,
  0xbb87ca2fbde4aa8eU, 0x3e697a883e234a3fU, 0xbcdbf77e3da6da95U, 0x3e79b37cbc377173U,
  0xbd1c67a03da72e46U, 0x3d7e213fbcef8b60U, 0xbdfbc36ebd7c9248U, 0x3e6301e2be54aed6U,
  0xbe06e7ed3d848a1eU, 0xbdac6ef8bdd81a3fU, 0x3e1d83383d18bf00U, 0x3cfe22d8bd8ac0f2U,
  0xbcade7afbd1cb26cU, 0xbe122112bd22afefU, 0x3ca5f2c43d098e86U, 0xbcfc762d3da39516U,
  0xbe49a593bc899b2aU, 0xbd63db193e1642bcU, 0xbe68359bbe2d4b9bU, 0x3e41af85baf72fe3U,
  0xbc8d5deb3e2b6dbeU, 0xbda65d06be4b62d7U, 0xbce5be683e252d6aU, 0xbdd3cbf7bdd6f78cU,
  0xbd03f6d6be21e249U, 0xbd8e7f013db5c2faU, 0x3dec055a3cf53d35U, 0x3e27d4423d939392U,
  0x3cda20513e38ea21U, 0xbe1203653d93fdf1U, 0xbc0b9c18bde39096U, 0x3dcf8c773d1e5d1eU,
  0x3ddc15bb3d68eec1U, 0x3de378e13e13c0d7U, 0x3d8f7ea0bdff5fbbU, 0x3dfbbd5f3e586fcdU,
  0xbded87de3e46e18eU, 0x3f972cf93fafa759U, 0x405200d541069ee8U, 0xbef2c7e73fa276e6U,
  0xbeab3bfebf3f769fU, 0xbf4995e2bf81606aU, 0xbcda6cedbd6565baU, 0x3ea8137d3e19c95dU,
  0x3e221a16bdcd25e9U, 0x3c678ffbbe8497d8U, 0xbe1b9f613e029563U, 0xbe86bd2dbe0e58b2U,
  0x3e8aec163ce89102U, 0xbd8010a33e406ff1U, 0xbe0102e5bdb67405U, 0x3b862c7f3e2b7f90U,
  0x3e281f16bd7dc1e6U, 0xbe0975fabe27bd20U, 0xbd85a90fbe765047U, 0xbd2734e3ba3b5ca3U,
  0xbe836343bd3138b9U, 0x3d516edf3bad702aU, 0x3cbaaa203caeda82U, 0x3e4463e13e6c9e50U,
  0xbd47daf43dc13acdU, 0x3e69f57dbd3ba257U, 0x3e2a9f3c3e6d9da9U, 0xbcc743f23dacfc0cU,
  0x3e100d833b89a004U, 0xbe0a91ba3e05c5eaU, 0xbe145d783d9485f9U, 0xbe4393adbc5d0526U,
  0x3e81d9493d806363U, 0xbe1f542cbe8de96aU, 0x3dadfa273e0f86b1U, 0xbda7d03d3c57d789U,
  0x3e217b2dbdfeece7U, 0xbd20083dbdf2b280U, 0xbe0be3a33d801aacU, 0xbddc866e3e5a03c4U,
  0xbe19491ebe1dabeaU, 0x3d4c4f81be12efbeU, 0xbe1c556fbe39a19fU, 0xbcfafadb3daa68c9U,
  0xbdce0ea83da35da5U, 0x3c7d7ef63ce51685U, 0x405dc20b403f4e80U, 0x4050d37f3ffe0de6U,
  0xbf441d904057ab7eU, 0xbeb6e4dcbf38d2baU, 0xbf21092cbf04a06fU, 0xbc35da9bbde234d6U,
  0x3e335bbbbe082c35U, 0xbe4fdb5cbe151b8eU, 0xbe1cc8a33dd03a05U, 0xbe5295533d306f68U,
  0x3b9a839ebcd5d257U, 0x3e350ee5be6865afU, 0xbe1a8836be9f5fd9U, 0xbcbcbc7a3caa0935U,
  0xbd1cb6b8bc22db5fU, 0x3e5237a73c801510U, 0xbd6dc21fbe029014U, 0xbe852410bdd594b9U,
  0xbde8b4f73e1c8f55U, 0x3cee0e453d5b4ba1U, 0x3d98a1b03d97a13aU, 0xbd6816c83d95e0b3U,
  0x3e500cfcbc14f83fU, 0xbcb573d93e278338U, 0xbd9630323daff7d3U, 0xbe2839dd3e9571aaU,
  0x3d47222ebd90d1fcU, 0x3dc6bb1cbe0279a7U, 0xbcd3658abd704751U, 0x3e5bc8babe26f2a3U,
  0xbd523892bdd78736U, 0xbe25bd693e250a28U, 0xbdc9b8f63e8739d8U, 0x3dc25232be084da5U,
  0x3e13b6d83c30431bU, 0xbe2e5bd63e78a1c0U, 0xbd3fb40f3dfe24cfU, 0x3e2ea9c0be07f4fbU,
  0x3cc247873df12296U, 0x3dc217373dec90dcU, 0xbd4054f03d4a1f33U, 0x3cd013b5be40ac9cU,
  0x3cb25a003c73f473U, 0x3d82885d3e84d414U, 0x3e4aae04bda0758aU, 0x40394f8d40563a86U,
  0x3fa30dc33fea6d89U, 0xbf1222d33fefa9b5U, 0xbf394cafbf62d478U, 0xbf499165bec3636dU,
  0xbde6b0cfbe03395bU, 0xbd95c89bbdbdf9aaU, 0xbd0b99d0bd61f33cU, 0x3b03487fbc626d24U,
  0x3d0d61c73c9b9785U, 0x3d9775323d538f03U, 0x3de13fc03dbb9b13U, 0x3e12acca3e009efeU,
  0xaaacbbba9ef9c8bbU, 0xa7667585aedddbd9U, 0xacbe8e9a8dbc7479U, 0xafdd657467456765U,
  0x87dcebbc988cbd7cU, 0xa96686677aa9d8c8U, 0x784be8bbd8c88bdeU, 0x3233233483688476U,
  0x1345326245356542U, 0x5433eddcbbecabeaU, 0xdabbbc9d35344234U, 0x442144322320da9aU,
  0xcabe667353332073U, 0x64475439edbedfaeU, 0xcdbdacbb9cde3297U, 0x5383384767754395U,
  0x797ecded23224444U, 0x854328654a34898bU, 0xaa95899b7bca76e7U, 0x9765599566769555U,
  0x85568588766968aaU, 0x7677cdc9fdcbccacU, 0x8ccba9aa84775589U, 0x9a7acc7ca8bccbccU,
  0xb8da4768786988a5U, 0x67378854778a8a89U, 0x6667667767657497U, 0x8888677677667676U,
  0x7667767698888888U, 0x7878888888887766U, 0x777799899999a999U, 0x7777877788787777U,
  0x6666666666776677U, 0xdcbc767777777877U, 0xba8baea8cfbcc99cU, 0x68967868b89aad9cU,
  0x8697cc98b8badb7aU, 0x3dbf234774555678U, 0x3d4086c23db71984U, 0x3cf803bb3db9bcf8U,
  0x3d36a1ac3d36eba3U, 0x3c98b6d7bbb85b88U, 0xbec2b92c3dcf33c3U, 0x3e81607bbe7f13e7U,
  0x3e754b753ec59eadU, 0xbe87edb3beadd7e9U, 0xbb13251d3e3854d9U, 0x3d45e81ebebf33a5U,
  0xbe8dc5dd3e5e884fU, 0xbe6738debeb62e35U, 0x3dafc406bc97be02U, 0x3e01f7ad3d9bd655U,
  0xbd416f943d1b1833U, 0xbe522c7fU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

