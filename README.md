## Information

FactoryGame is an unreal engine project  
PAKer packs your assets into a pak file  
SMI is a c++ project for testing purposes.  

All assets/code related to satisfactory are under copyright for Coffee Stain Studios!  

## Instructions

#### Creating a new Item  
Create a new blueprint and select FGItemDescriptor as the parent.  

#### Creating a new resource item (resources with resource nodes)  
Create a new blueprint and select FGResourceDescriptor as the parent.  

#### Adding new item/building/etc. references  
You need a tool to unpack the original Satisfactory pak file first!  
You have to replicate the exact folder structure e.g.:  

> Path to pak asset: /FactoryGame/Content/FactoryGame/Buildable/Factory/ConstructorMk1/Build_ConstructorMk1.uasset  
> Ignore the first two folders like this: FactoryGame/Buildable/Factory/ConstructorMk1/Build_ConstructorMk1.uasset  
> Now you have to create all these folders  
> Your folder structure should look like this:  

<pre>
FactoryGame  
    ExampleMod...  
    Buildable  
        Factory  
            ConstructorMk1  
</pre>

> Now create a new blueprint with the exact same name. (Name should be "Build_ConstructorMk1" in this example)  
> The blueprint parent doesn't matter!  

#### Creating the pak file  
Click on [FILE] and click on "Cook Content for Windows"  
Now open the File Explorer and go to PATH/TO/PROJECT/Saved/Cooked/WindowsNoEditor/FactoryGame/Content/FactoryGame.  
Copy the folders and the files you want to add/overwrite and copy them into PAKer/FactoryGame/Content/FactoryGame.  
Now execute PakIt.bat in the PAKer folder.  
This should create a file named pakfile_p.pak.  

#### How do I use/load my assets?  
You can use SML or the SMI project.  
In SMI there's a function called AssetLoader::LoadAssetSimple(...)  

#### How do I use SMI?  
Change the code as you like. There're some comments which will help you ;)  
If you built the project you have to inject the compiled dll into satisfactory.  

## Important

Any files/assets you want to overwrite/add must be copied to the PAKer/FactoryGame/Content/FactoryGame folder!!!  
Assets you want to reference should not be put into the pak file!!!  