/**
  * Declaration of modal manager instance
*/
const modal_manager = new ModalManager();

/**
  * Call for slideshow modal to be presented
*/
modal_manager.operationSlideshow();

/**
  * Changes slide based off of parameter
  * @param {String} operation -- previous or next
*/
function changeSlide(operation) {
  $('#carouseleIndicators').carousel(operation);
}
