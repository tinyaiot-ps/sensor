function decodeUplink(input) {
 var bytes = input.bytes;
  var decoded = {};

  // Assuming 0046 is the entire payload and it's a 16-bit integer
  decoded.value = (bytes[0] << 8) | bytes[1];

  return {
    data: decoded
  };
}
