$(document).ready(function() {
  if ($('#page-closure-wrapper').length == 0) {
    return;
  }
  
  $.each($('.form-item').not('.date-clear'), function() {
    var description = $(this).children('.description');
    var tooltip;
    
    if (description.length > 0) {
      $(this).css('position', 'relative');
      description.addClass('form-item-description-tooltip').hide().wrapInner('<div class="tooltip-inner" />').wrapInner('<div class="tooltip-wrapper" />');
      
      var path_to_module = Drupal.settings.ngcp_custom.path;
      tooltip = $('<div>').addClass('tooltip-trigger').css({
        'height': '11px',
        'width': '12px',
        'background': 'url("/' + path_to_module + '/images/help.png") no-repeat scroll 0 0 transparent'
      });
      
      $(this).children('label').append($('<div>').addClass('tooltip-trigger-wrapper').append(tooltip).append(description));

      tooltip.tooltip({
        relative: true,
        position: "center right",
        tipClass: "description",
        events: {
          def: 'mouseover focus, blur',
          input: 'mouseover focus, blur'
        },
        offset: [0, 10]
      });
      
      
      tooltip.mouseout(function() {
        if (!($(this).get(0) == $(document.activeElement).get(0))) {
          $(this).data('tooltip').hide();
        }
      });
    }
  });
});