Pod::Spec.new do |s|

  s.name         = "AppusFramework"
  s.version               = "0.0.4"
  s.summary               = "Example of creating own pod."
  s.homepage              = "https://github.com/AToshka/MyCustomPod"
  s.license               = { :type => 'MIT', :file => "LICENSE" }
  s.author                = { "Username" => "ilya.borshchov@gmail.com" }
  s.platform              = :ios, "7.0"
  s.source                = { :git => "https://github.com/Atoshka/MyCustomPod.git", :tag => "0.0.4" }
  s.source_files  = 'Classes/*.{h,m}'
  s.framework             = "Foundation"
  s.requires_arc          = true

end
