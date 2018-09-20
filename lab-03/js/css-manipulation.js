/**
  * Declaration of modal manager instance
*/
const modal_manager = new ModalManager();

/**
  * Call for css manipulation modal to be presented
*/
modal_manager.operationCSSManipulation();

/**
  * Updates CSS on div_dummy_text according to spec from user
*/
function updateCSS() {
  // get div_dummy_text
  var div_dummy_text = document.getElementById('div_dummy_text');
  // get spec
  var border_red = document.getElementById('input_border_red').value;
  var border_green = document.getElementById('input_border_green').value;
  var border_blue = document.getElementById('input_border_blue').value;
  var border_width = document.getElementById('input_border_width').value;

  var backgound_red = document.getElementById('input_background_red').value;
  var backgound_green = document.getElementById('input_background_green').value;
  var backgound_blue = document.getElementById('input_background_blue').value;

  // set to 0 if not entered
  if (border_width == "") {
    border_width = 0;
  }

  // update border
  div_dummy_text.style.borderColor = 'rgb(' + border_red + ',' + border_green + ',' + border_blue + ')';
  div_dummy_text.style.borderWidth = border_width + 'px';
  div_dummy_text.style.borderStyle = 'solid';

  // update background color
  div_dummy_text.style.backgroundColor = 'rgb(' + backgound_red + ',' + backgound_green + ',' + backgound_blue + ')';
}
