async function render(buffer, {width: inputWidth, height: inputHeight, preserveAspectRatio}) {
    const image = await Jimp.read(buffer);
    const {bitmap} = image;
  
    const {width, height} = calculateWidthHeight(bitmap.width, bitmap.height, inputWidth, inputHeight, preserveAspectRatio);
  
    image.resize(width, height);
  
    let result = '';
    for (let y = 0; y < image.bitmap.height - 1; y += 2) {
      for (let x = 0; x < image.bitmap.width; x++) {
        const {r, g, b, a} = Jimp.intToRGBA(image.getPixelColor(x, y));
        const {r: r2, g: g2, b: b2} = Jimp.intToRGBA(image.getPixelColor(x, y + 1));
  
        if (a === 0) {
          result += chalk.reset(' ');
        } else {
          result += chalk.bgRgb(r, g, b).rgb(r2, g2, b2)(PIXEL);
        }
      }
  
      result += '\n';
    }
  
    return result;
  }