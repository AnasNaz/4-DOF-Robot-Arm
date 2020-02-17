/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Robfkine_info.c
 *
 * Code generation for function 'Robfkine'
 *
 */

/* Include files */
#include "_coder_Robfkine_info.h"

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[9] = {
    "789ced594f6f124114dfd6dad018b527136f1e8c89a961b1564a4c4ce882140c145ae85fa3767619da85d959b2bb14e8453f82274f7e00bd79f4a837bf809efd"
    "26babb30c012266cbbdb6dc1790999be3e98df9bdfbe7d33f31e3793c9cd701c77cbfc58e39f2867cbcdcec02d76c759ce29c3f699eeb830a413b9cecd397e47",
    "ec9fbaa3a46203b68c8e82640c371a8a083553c14081bd69caaa2263808d52bb0e390dea2a3a8165db5291112cc90accaa034a5a3615253560ea2996c9fa3b71"
    "0ca55ab1a170dab1de77170d2adc003f1f28eb9f73c90f4fe1c7fadedf777dfbab17af13cff86d1d6a3a0f30d0637c1ec3a4269f403ea94a0d056243e7b754b1",
    "5233b90a2b3dff0e29f8f32efd1b1e892c70a141353e0ecf2d1fd728788ba6c5e243523b0fc22fbcf921bd8f376fe395d58688601fefb347bc752a5ee77913fb"
    "ab4c76cf7ee4054d3dd28072cf8a4d9dcfad95b26b02bfb51c791c1379435591a8b678a8201ec922af0003019187a8d2c0bcc954b071f063fbc1afb580e32ee8",
    "38bf34bc16653eb77177878247e28ed8eba55675356f14a2ab79502a564bda7a5bc242df8fc2189c717e70143da8f9d9fbeb1467bcddefe5f1f794f9dcf27497"
    "8247782276492d432d2c9b9bbd86010aeb1240400b932cef3dcf0f0bcd1f2204efdb39f1c8fcc53178c47ee638b13e4b366bfc12a18d5feaf0d68d99c1751c52",
    "fcf42f6ee2d18f5f58de9ff4bc1fd3b23ad89472fbbbe2fe9e2808d195ca116479ffbfcbfb5eef330f29788427621fcafba05e47eda29dc4520d2c19b28a33b8"
    "808044ae7ac4bfba47ff6e8ff18fd82b5d2fde1e035c362f0004ffa7477c710c3eb1fbb32fd069ed6e1301c6d977f146f537db272e082fa87d4205d9aa08c07a",
    "a2fc2456d5f79661eea0de4e4ecf3ec1deefd1eb72178f8f7cab03858674aef7bd90cda3aceb75a0e9f0b2ea405f3de26d50f13a7142ec5ece131643d6898270"
    "65c54480f782d0f3372cdf4f7abe6fee66f414aaeda4962b5a119d54f32ff1e96682e57b96ef2d094f5dbde8bcfb01ab178d1e89b07a513078ac5ee4cffc5eeb",
    "2017ddd7a5d541dcc6d5ec904e84f4eb9df5f350bcfbdfc0fabcba8c6d9df579c7d50b4da602ad17c6599ff702f182cadf00a48583662d2defe4120d240838b9"
    "5ad898a23a0e7b7f9d7235fbbc24cbb33eefd9ceed9d98195cc721c54f1febf771766e9ffcbc1f799a8ec612cddde588d06ca2481dad248f4ea7e8dccef2be53",
    "589f77b47faccfebf49bf57927038ff579fd999fbddfa3d7e52e1eaf4adddfbffbc379eb44ecfe307a24c2ee0fc1e0b1fb83b7f9ff012bb98203",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 14072U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("Robfkine"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(""));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar(0.0));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_Robfkine_info.c) */
