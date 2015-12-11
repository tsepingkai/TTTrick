require('UIView, UIImageView');
defineClass('MeteorAnimationView : UIView', {
            loadView: function() {
            console.log("MeteorAnimationView loadView")
//            var scale = 0.5;
            self.setFrame({x: 0, y: 0, width: 300, height:300});
//            self.setCenter({x: startX, y: startY});
//            
//            // Tail image view
//            var tailImageView = UIImageView.alloc().init();
//            tailImageView.setFrame(CGRectMake(0, 0, 165 * scale, 88 * scale));
//            tailImageView.setImage(tailImage);
//            self.addSubview(tailImageView);
//            self.setProp_forKey(tailImageView, 'tailImageView');
//            
//            // Head image view
//            var headImageView = UIImageView.alloc().init();
//            headImageView.setFrame(CGRectMake(0, 50 * scale, 38 * scale, 38 * scale));
//            headImageView.setImage(headImage);
//            self.addSubview(headImageView);
//            self.setProp_forKey(headImageView, 'headImageView');
//            
            },
            
            // Start animation
            start: function(distance) {
            console.log("MeteorAnimationView Start")
//            var headImageView = self.getProp('headImageView');
//            headImageView.setAlpha(1);
//            
//            var tailImageView = self.getProp('tailImageView');
//            tailImageView.setAlpha(1);
//            
//            
//            var wself = self
//            headImageView
//            .moveX_Y(-(165/187*distance), 88/187*distance).easeIn().thenAfter(0.6)
//            .makeOpacity(0).animateWithDuration_Completion(0.01, block(function() {
//                                                                       wself.removeFromSuperview();
//                                                                       }));
//            tailImageView
//            .moveX_Y(-(165/187*distance), 88/187*distance).easeIn().thenAfter(0.6)
//            .makeOpacity(0).animate(0.01);
//            }
            }}, {})